# 🧠 Skills Exchange Platform

A **Django-based full-stack web application** designed to connect **students, developers, professionals, and business stakeholders** for **mutual skill exchange and collaboration**.  
The platform allows users to showcase their skills, find others with complementary expertise, and work together — promoting peer-to-peer learning without monetary transactions.

---

## 🚀 Project Overview

The **Skills Exchange Platform** enables users to:
- Create accounts and manage profiles  
- Add and display personal skills  
- Send and receive skill exchange requests  
- Collaborate with other users  
- Give feedback after successful collaboration  
- Administer the system through Django’s built-in admin panel  

It is responsive, secure, and built entirely using open-source technologies.

---

## 🧩 Features

✅ User Registration & Login  
✅ Profile Management (Add/Edit Skills)  
✅ Skill Listing & Search Functionality  
✅ Skill Exchange Requests (Send/Accept/Reject)  
✅ Feedback and Rating System  
✅ Admin Dashboard for Management  
✅ Responsive UI (Bootstrap)  
✅ Secure Authentication & CSRF Protection  

---

## 🛠️ Technologies Used

| Component | Technology |
|------------|-------------|
| Frontend | HTML, CSS, Bootstrap, JavaScript |
| Backend | Django Framework (Python) |
| Database | SQLite |
| IDE | Visual Studio Code |
| Version Control | Git & GitHub |
| Deployment | Django Development Server |

---

## ⚙️ Installation Guide

Follow these steps to set up the project on your local machine:

### **1️⃣ Clone the Repository**
git clone https://github.com/your-username/Skills_Exchange.git
cd Skills_Exchange

2️⃣ Create and Activate Virtual Environment
python -m venv venv
venv\Scripts\activate     # On Windows
# source venv/bin/activate  # On Linux/Mac

3️⃣ Install Dependencies
pip install -r requirements.txt

(If requirements.txt doesn’t exist, run: pip install django django-widget-tweaks)
4️⃣ Apply Migrations
python manage.py makemigrations
python manage.py migrate

5️⃣ Create Superuser (Admin)
python manage.py createsuperuser

6️⃣ Run the Server
python manage.py runserver

Open the browser and go to:
http://127.0.0.1:8000/


🧑‍💻 Usage Guide
User Actions


Register/Login → Access the system


Add Skills → List skills and experience


View Skills → Browse others’ skills


Send Requests → Connect for collaboration


Manage Requests → Accept or reject offers


Give Feedback → Rate the collaboration


Admin Actions


Access the admin panel at:
http://127.0.0.1:8000/admin



Manage users, skills, and requests.



🗄️ Project Structure
Skills_Exchange/
│
├── skills_exchange/          # Main Django project settings
├── exchange_app/             # Application folder (models, views, urls, templates)
│   ├── migrations/
│   ├── templates/
│   ├── static/
│   ├── models.py
│   ├── views.py
│   ├── urls.py
│   └── forms.py
│
├── db.sqlite3                # SQLite database
├── manage.py                 # Django management script
└── README.md                 # Project documentation


🔐 Security Features


Django’s built-in User Authentication System


Password Hashing for all credentials


CSRF Protection on all forms


Session Management for authorized access



🧠 Example Code Snippets
Model Example (models.py)
from django.db import models
from django.contrib.auth.models import User

class Skill(models.Model):
    user = models.ForeignKey(User, on_delete=models.CASCADE)
    skill_name = models.CharField(max_length=100)
    description = models.TextField()
    category = models.CharField(max_length=50)
    level = models.CharField(max_length=20, choices=[
        ('Beginner', 'Beginner'),
        ('Intermediate', 'Intermediate'),
        ('Expert', 'Expert')
    ])

class Request(models.Model):
    sender = models.ForeignKey(User, on_delete=models.CASCADE, related_name='sent_requests')
    receiver = models.ForeignKey(User, on_delete=models.CASCADE, related_name='received_requests')
    skill = models.ForeignKey(Skill, on_delete=models.CASCADE)
    status = models.CharField(max_length=20, default='Pending')


🧩 Troubleshooting
IssuePossible CauseSolutionModuleNotFoundError: No module named 'widget_tweaks'Missing dependencyRun pip install django-widget-tweaksTemplateDoesNotExistWrong template pathEnsure correct template directory in settings.pyDatabase errorsMigration not appliedRun python manage.py makemigrations && python manage.py migrateStatic files missingMissing static configurationRun python manage.py collectstatic

🔄 Future Enhancements


Add real-time chat using Django Channels


Implement AI-based skill matching


Add notifications system for new requests


Develop mobile app version (Flutter/React Native)


Enable payment system for premium collaborations



📚 License
This project is open-source and available under the MIT License.
You are free to use, modify, and distribute it with attribution.

👨‍💻 Author
Umer Farooque
Department of Computer Systems Engineering
Mehran University of Engineering and Technology, Jamshoro
📧 Email: [Your Email Here]
📅 Batch: 22  🎓 Roll No: 23CS028

⭐ Acknowledgment
Special thanks to Engr. Zaib-ul-Nisa, Course Instructor for Web Engineering (CS-373),
for providing continuous guidance and support during the project development.

🏁 In Summary:

“Skills Exchange Platform” is a Django-powered web application built to promote collaboration and learning among individuals through secure, scalable, and user-friendly design.



✅ **How to Use This File:**
- Save this text as `README.md` in your project’s root folder.
- It will automatically render formatted when viewed on GitHub or VS Code.

Would you like me to include a **`requirements.txt` file** (listing all Python libraries to install) along with this README? It’s usually kept in the same directory for easier setup.
